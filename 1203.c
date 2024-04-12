void fun()
{
  int entity_8 = 87;
  entity_8 = 66;
  char* entity_1;
  char* entity_3;
  char entity_2[29] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  entity_3 = (char*)malloc(29*sizeof(char));
  entity_3[29-1]='';
  memset(entity_2, 'j', 29-1);
  entity_2[29-1]='';
  memcpy(entity_1, entity_2, 29*sizeof(char));
}