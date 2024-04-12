void fun()
{
  int entity_6 = 47;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_2;
  char entity_7[79] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(75*sizeof(char));
  entity_2[75-1]='';
  memset(entity_4, 't', entity_6-1);
  entity_4[entity_6-1]='';
  memset(entity_7, 'h', 79-1);
  entity_7[79-1]='';
  entity_4[16] = 'A';
}