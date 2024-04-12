void fun()
{
  int entity_2 = 47;
  int entity_8 = 21;
  entity_2 = 58;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(3*sizeof(char));
  entity_3[3-1]='';
  memset(entity_7, 'B', entity_2-1);
  entity_7[entity_2-1]='';
  memcpy(entity_3, entity_7, entity_2*sizeof(char));
}