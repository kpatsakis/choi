void fun()
{
  int entity_0 = 95;
  char entity_3[100] = "";
  entity_3 = NULL;
  char* entity_8;
  memset(entity_3, 'j', 100-1);
  entity_3[100-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  strcpy(entity_8, entity_3);
}