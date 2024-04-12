void fun()
{
  int entity_6 = 80;
  char* entity_2;
  char entity_4[29] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_4, 'b', 29-1);
  entity_4[29-1]='';
  entity_6 = 42;
  memcpy(entity_2, entity_4, 29*sizeof(char));
}