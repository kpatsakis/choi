void fun()
{
  int entity_2 = 12;
  int entity_4 = 30;
  char entity_7[39] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'j', 39-1);
  entity_7[39-1]='';
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[45-1]='';
  entity_4 = 74;
  entity_7[entity_4] = 'u';
}