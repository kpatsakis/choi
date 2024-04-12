void fun()
{
  int entity_8 = 97;
  char* entity_6;
  char* entity_7;
  char entity_1[89] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_1, 'c', 89-1);
  entity_1[89-1]='';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  entity_8 = 6;
  strcpy(entity_6, entity_1);
}