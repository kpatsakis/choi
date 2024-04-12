void fun()
{
  int entity_1 = 84;
  entity_1 = 31;
  char* entity_4;
  char entity_7[20] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[29-1]='';
  memset(entity_7, 's', 20-1);
  entity_7[20-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  strcpy(entity_2, entity_7);
}