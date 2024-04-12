void fun()
{
  int entity_7 = 3;
  entity_7 = 37;
  char entity_0[44] = "";
  entity_0 = NULL;
  char* entity_8;
  char* entity_2;
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  memset(entity_0, 'D', 44-1);
  entity_0[44-1]='';
  entity_8 = (char*)malloc(70*sizeof(char));
  entity_8[70-1]='';
  strcpy(entity_2, entity_0);
}