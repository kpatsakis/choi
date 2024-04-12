void fun()
{
  int entity_1 = 49;
  char* entity_3;
  char entity_7[49] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  entity_3 = (char*)malloc(92*sizeof(char));
  entity_3[92-1]='';
  memset(entity_7, 'i', 49-1);
  entity_7[49-1]='';
  strcpy(entity_4, entity_7);
}