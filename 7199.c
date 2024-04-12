void fun()
{
  int entity_2 = 23;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_5;
  memset(entity_3, 'r', entity_2-1);
  entity_3[entity_2-1]='';
  entity_5 = (char*)malloc(52*sizeof(char));
  entity_5[52-1]='';
  memcpy(entity_5, entity_3, entity_2*sizeof(char));
}