void fun()
{
  int entity_2 = 3;
  char* entity_4;
  char entity_7[67] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[48-1]='';
  memset(entity_7, 'a', 67-1);
  entity_7[67-1]='';
  entity_7[entity_2] = 'W';
}