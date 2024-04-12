void fun()
{
  int entity_4 = 82;
  char* entity_1;
  char entity_7[59] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_7, 'O', 59-1);
  entity_7[59-1]='';
  memcpy(entity_1, entity_7, 59*sizeof(char));
}