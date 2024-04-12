void fun()
{
  char* entity_2;
  char entity_3[18] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_4 = 'C';
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[93-1]='';
  entity_2 = (char*)malloc(28*sizeof(char));
  entity_2[28-1]='';
  memset(entity_3, 'd', 18-1);
  entity_3[18-1]='';
  entity_3[95] = 'w';
}