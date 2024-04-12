void fun()
{
  int entity_9 = 70;
  int entity_1 = 6;
  char entity_4[85] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_4, 'o', 85-1);
  entity_4[85-1]='';
  strcpy(entity_8, entity_4);
}