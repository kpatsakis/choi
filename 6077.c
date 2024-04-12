void fun()
{
  int entity_6 = 99;
  entity_6 = 15;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(84*sizeof(char));
  entity_3[84-1]='';
  memset(entity_1, 'i', entity_6-1);
  entity_1[entity_6-1]='';
  entity_1[46] = 'w';
}