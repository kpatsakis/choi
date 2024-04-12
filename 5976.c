void fun()
{
  int entity_8 = 2;
  char entity_4[87] = "";
  entity_4 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_4, 'S', 87-1);
  entity_4[87-1]='';
  memcpy(entity_5, entity_4, 87*sizeof(char));
}