void fun()
{
  int entity_9 = 82;
  entity_9 = 57;
  char* entity_8;
  char entity_7 = 'N';
  char* entity_1;
  char entity_5[24] = "";
  entity_5 = NULL;
  memset(entity_5, 'X', 24-1);
  entity_5[24-1]='';
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[68-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  strcpy(entity_1, entity_5);
}