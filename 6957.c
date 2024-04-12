void fun()
{
  int entity_4 = 69;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'A', entity_4-1);
  entity_2[entity_4-1]='';
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[78-1]='';
  entity_2[43] = 'e';
}