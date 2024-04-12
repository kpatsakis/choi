void fun()
{
  int entity_3 = 78;
  entity_3 = 78;
  char entity_4 = 'C';
  char entity_7 = 'z';
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_8;
  char* entity_6;
  memset(entity_5, 't', entity_3-1);
  entity_5[entity_3-1]='';
  entity_6 = (char*)malloc(41*sizeof(char));
  entity_6[41-1]='';
  entity_8 = (char*)malloc(3*sizeof(char));
  entity_8[3-1]='';
  strcpy(entity_6, entity_5);
}