void fun()
{
  int entity_5 = 44;
  char entity_8[62] = "";
  entity_8 = NULL;
  char entity_1 = 'A';
  char* entity_7;
  memset(entity_8, 't', 62-1);
  entity_8[62-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memcpy(entity_7, entity_8, 62*sizeof(char));
}