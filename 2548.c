void fun()
{
  int entity_3 = 80;
  char entity_4[82] = "";
  entity_4 = NULL;
  char* entity_8;
  char* entity_0;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(28*sizeof(char));
  entity_0[28-1]='';
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[81-1]='';
  memset(entity_4, 'V', 82-1);
  entity_4[82-1]='';
  memset(entity_2, 'i', entity_3-1);
  entity_2[entity_3-1]='';
  entity_3 = 76;
  strcpy(entity_0, entity_2);
}