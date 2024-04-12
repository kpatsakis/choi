void fun()
{
  char entity_2[27] = "";
  entity_2 = NULL;
  char* entity_7;
  char* entity_9;
  entity_7 = (char*)malloc(2*sizeof(char));
  entity_7[2-1]='';
  memset(entity_2, 'B', 27-1);
  entity_2[27-1]='';
  entity_9 = (char*)malloc(13*sizeof(char));
  entity_9[13-1]='';
  entity_2[84] = 'r';
}