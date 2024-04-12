void fun()
{
  int entity_0 = 40;
  char entity_1[71] = "";
  entity_1 = NULL;
  char* entity_8;
  char* entity_3;
  entity_3 = (char*)malloc(29*sizeof(char));
  entity_3[29-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_1, 's', 71-1);
  entity_1[71-1]='';
  memcpy(entity_8, entity_1, 71*sizeof(char));
}