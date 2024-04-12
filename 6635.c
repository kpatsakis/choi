void fun()
{
  int entity_3 = 90;
  int entity_8 = 70;
  char entity_5[84] = "";
  entity_5 = NULL;
  char* entity_1;
  char entity_2[92] = "";
  entity_2 = NULL;
  memset(entity_5, 's', 84-1);
  entity_5[84-1]='';
  memset(entity_2, 'l', 92-1);
  entity_2[92-1]='';
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[86-1]='';
  entity_3 = 70;
  entity_5[entity_3] = 't';
}