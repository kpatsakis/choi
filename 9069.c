void fun()
{
  int entity_0 = 22;
  entity_0 = 20;
  char* entity_7;
  char entity_4[78] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_4, 'I', 78-1);
  entity_4[78-1]='';
  entity_7 = (char*)malloc(25*sizeof(char));
  entity_7[25-1]='';
  strcpy(entity_3, entity_4);
}