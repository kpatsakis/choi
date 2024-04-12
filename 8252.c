void fun()
{
  int entity_5 = 52;
  char entity_6[88] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[68-1]='';
  memset(entity_6, 'p', 88-1);
  entity_6[88-1]='';
  entity_6[entity_5] = 'k';
}