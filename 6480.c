void fun()
{
  char entity_2[68] = "";
  entity_2 = NULL;
  char entity_7[8] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_2, 'U', 68-1);
  entity_2[68-1]='';
  memset(entity_7, 'v', 8-1);
  entity_7[8-1]='';
  entity_1 = (char*)malloc(22*sizeof(char));
  entity_1[22-1]='';
  entity_2[18] = 'Z';
}