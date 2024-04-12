void fun()
{
  int entity_1 = 7;
  entity_1 = 44;
  char* entity_7;
  char* entity_8;
  char entity_4[78] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[21-1]='';
  memset(entity_4, 'j', 78-1);
  entity_4[78-1]='';
  strcpy(entity_8, entity_4);
}