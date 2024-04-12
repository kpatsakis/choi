void fun()
{
  int entity_2 = 48;
  int entity_6 = 42;
  char* entity_3;
  char entity_8[8] = "";
  entity_8 = NULL;
  memset(entity_8, 't', 8-1);
  entity_8[8-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 9;
  memcpy(entity_3, entity_8, 8*sizeof(char));
}