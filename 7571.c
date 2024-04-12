void fun()
{
  int entity_5 = 10;
  int entity_3 = 70;
  char entity_1[24] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memset(entity_1, 'N', 24-1);
  entity_1[24-1]='';
  memcpy(entity_7, entity_1, 24*sizeof(char));
}