void fun()
{
  int entity_1 = 20;
  char entity_4 = 'x';
  char* entity_0;
  char* entity_8;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[62-1]='';
  memset(entity_3, 'Z', entity_1-1);
  entity_3[entity_1-1]='';
  entity_8 = (char*)malloc(95*sizeof(char));
  entity_8[95-1]='';
  strcpy(entity_0, entity_3);
}