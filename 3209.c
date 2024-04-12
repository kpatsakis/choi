void fun()
{
  int entity_6 = 55;
  entity_6 = 87;
  char entity_4[50] = "";
  entity_4 = NULL;
  char* entity_5;
  char* entity_8;
  memset(entity_4, 'V', 50-1);
  entity_4[50-1]='';
  entity_5 = (char*)malloc(99*sizeof(char));
  entity_5[99-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memcpy(entity_8, entity_4, 50*sizeof(char));
}