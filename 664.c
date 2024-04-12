void fun()
{
  int entity_4 = 51;
  int entity_5 = 55;
  char* entity_2;
  char* entity_0;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  memset(entity_6, 'N', entity_4-1);
  entity_6[entity_4-1]='';
  entity_2 = (char*)malloc(70*sizeof(char));
  entity_2[70-1]='';
  entity_0 = (char*)malloc(74*sizeof(char));
  entity_0[74-1]='';
  strcpy(entity_2, entity_6);
}