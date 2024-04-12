void fun()
{
  int entity_2 = 9;
  char* entity_8;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_1 = 'Y';
  memset(entity_7, 'W', entity_2-1);
  entity_7[entity_2-1]='';
  entity_8 = (char*)malloc(99*sizeof(char));
  entity_8[99-1]='';
  entity_7[9] = 'a';
}