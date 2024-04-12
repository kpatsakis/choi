void fun()
{
  int entity_6 = 65;
  char* entity_1;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'z', entity_6-1);
  entity_4[entity_6-1]='';
  entity_1 = (char*)malloc(9*sizeof(char));
  entity_1[9-1]='';
  entity_6 = 70;
  entity_4[37] = 'g';
}