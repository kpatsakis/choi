void fun()
{
  int entity_1 = 44;
  int entity_3 = 11;
  char* entity_2;
  char* entity_8;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'u', entity_3-1);
  entity_6[entity_3-1]='';
  entity_8 = (char*)malloc(14*sizeof(char));
  entity_8[14-1]='';
  entity_2 = (char*)malloc(25*sizeof(char));
  entity_2[25-1]='';
  entity_3 = 78;
  strcpy(entity_2, entity_6);
}