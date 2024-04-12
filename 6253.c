void fun()
{
  int entity_8 = 23;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(74*sizeof(char));
  entity_2[74-1]='';
  memset(entity_6, 'a', entity_8-1);
  entity_6[entity_8-1]='';
  entity_6[94] = 'K';
}