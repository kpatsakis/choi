void fun()
{
  int entity_8 = 60;
  char entity_0[70] = "";
  entity_0 = NULL;
  char* entity_1;
  char* entity_3;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_0, 'Q', 70-1);
  entity_0[70-1]='';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  strcpy(entity_3, entity_0);
}