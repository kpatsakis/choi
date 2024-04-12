void fun()
{
  int entity_0 = 66;
  char* entity_6;
  char entity_4[87] = "";
  entity_4 = NULL;
  memset(entity_4, 'L', 87-1);
  entity_4[87-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  entity_0 = 1;
  memcpy(entity_6, entity_4, 87*sizeof(char));
}