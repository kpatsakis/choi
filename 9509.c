void fun()
{
  int entity_5 = 58;
  int entity_2 = 33;
  char entity_8[4] = "";
  entity_8 = NULL;
  char* entity_7;
  char* entity_1;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_8, 'O', 4-1);
  entity_8[4-1]='';
  entity_7 = (char*)malloc(59*sizeof(char));
  entity_7[59-1]='';
  memcpy(entity_1, entity_8, 4*sizeof(char));
}