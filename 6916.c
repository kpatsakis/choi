void fun()
{
  int entity_1 = 22;
  char entity_3[58] = "";
  entity_3 = NULL;
  char* entity_7;
  char* entity_8;
  memset(entity_3, 'g', 58-1);
  entity_3[58-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[36-1]='';
  strcpy(entity_7, entity_3);
}