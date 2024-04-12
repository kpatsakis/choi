void fun()
{
  int entity_6 = 11;
  int entity_0 = 98;
  char* entity_1;
  char* entity_2;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[83-1]='';
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[3-1]='';
  memset(entity_4, 'L', entity_6-1);
  entity_4[entity_6-1]='';
  strcpy(entity_1, entity_4);
}