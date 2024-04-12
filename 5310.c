void fun()
{
  int entity_5 = 58;
  int entity_2 = 15;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_0, 'f', entity_2-1);
  entity_0[entity_2-1]='';
  entity_1 = (char*)malloc(16*sizeof(char));
  entity_1[16-1]='';
  entity_2 = 48;
  entity_0[35] = 'y';
}