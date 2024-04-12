void fun()
{
  int entity_8 = 19;
  entity_8 = 76;
  char entity_7[37] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'C', 37-1);
  entity_7[37-1]='';
  entity_3 = (char*)malloc(42*sizeof(char));
  entity_3[42-1]='';
  entity_7[entity_8] = 'I';
}