void fun()
{
  int entity_7 = 88;
  char* entity_8;
  char* entity_1;
  char entity_6[1] = "";
  entity_6 = NULL;
  memset(entity_6, 'g', 1-1);
  entity_6[1-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[50-1]='';
  entity_7 = 10;
  strcpy(entity_1, entity_6);
}