void fun()
{
  int entity_1 = 77;
  char entity_9 = 'f';
  char entity_6 = 'O';
  char* entity_3;
  char entity_4[13] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_4, 'o', 13-1);
  entity_4[13-1]='';
  memcpy(entity_3, entity_4, 13*sizeof(char));
}