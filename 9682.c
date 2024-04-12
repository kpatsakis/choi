void fun()
{
  int entity_2 = 49;
  char* entity_1;
  char* entity_8;
  char entity_7[37] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(17*sizeof(char));
  entity_6[17-1]='';
  entity_8 = (char*)malloc(33*sizeof(char));
  entity_8[33-1]='';
  memset(entity_7, 'a', 37-1);
  entity_7[37-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  entity_2 = 99;
  memcpy(entity_1, entity_7, 37*sizeof(char));
}