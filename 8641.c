void fun()
{
  int entity_1 = 2;
  int entity_6 = 1;
  char* entity_3;
  char entity_7[29] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_7, 'c', 29-1);
  entity_7[29-1]='';
  memcpy(entity_3, entity_7, 29*sizeof(char));
}