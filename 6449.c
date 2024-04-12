void fun()
{
  int entity_4 = 63;
  char* entity_1;
  char entity_2[59] = "";
  entity_2 = NULL;
  memset(entity_2, 'b', 59-1);
  entity_2[59-1]='';
  entity_1 = (char*)malloc(35*sizeof(char));
  entity_1[35-1]='';
  entity_2[entity_4] = 'x';
}