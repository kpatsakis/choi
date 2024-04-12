void fun()
{
  int entity_5 = 16;
  entity_5 = 98;
  char entity_8[84] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_8, 'D', 84-1);
  entity_8[84-1]='';
  memcpy(entity_2, entity_8, 84*sizeof(char));
}