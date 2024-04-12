void fun()
{
  int entity_2 = 83;
  entity_2 = 3;
  char entity_3[8] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_3, 'R', 8-1);
  entity_3[8-1]='';
  memcpy(entity_7, entity_3, 8*sizeof(char));
}