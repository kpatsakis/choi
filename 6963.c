void fun()
{
  int entity_1 = 25;
  char* entity_7;
  char entity_8[33] = "";
  entity_8 = NULL;
  char entity_2[2] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_8, 's', 33-1);
  entity_8[33-1]='';
  memset(entity_2, 'R', 2-1);
  entity_2[2-1]='';
  memcpy(entity_7, entity_2, 2*sizeof(char));
}