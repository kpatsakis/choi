void fun()
{
  int entity_7 = 27;
  entity_7 = 53;
  char* entity_3;
  char* entity_2;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  memset(entity_8, 'i', entity_7-1);
  entity_8[entity_7-1]='';
  entity_2 = (char*)malloc(28*sizeof(char));
  entity_2[28-1]='';
  memcpy(entity_2, entity_8, entity_7*sizeof(char));
}